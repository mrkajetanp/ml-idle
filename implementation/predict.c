#include <stdio.h>
#include "final_7f_5e_8d.h"

#define NR_FEATURES 7
#define FEATURE_BUF_SIZE 80
#define LABEL_BUF_SIZE 10

int predict_from_csv(char* features_path, char* labels_path) {
    FILE *fp, *lfp;
    char buf[FEATURE_BUF_SIZE];
    char lbuf[LABEL_BUF_SIZE];
    fp = fopen(features_path, "r");
    lfp = fopen(labels_path, "r");

    if (fp == NULL || lfp == NULL) {
        perror("no worky");
        return -1;
    }

    int64_t features[NR_FEATURES];
    int32_t expected_class;
    int32_t predicted_class;

    int count = 0;
    int accurate = 0;

    while (fgets(buf, FEATURE_BUF_SIZE, fp) != NULL && fgets(lbuf, LABEL_BUF_SIZE, lfp) != NULL) {
        sscanf(buf, "%ld,%ld,%ld,%ld,%ld,%ld,%ld",
                &features[0], &features[1], &features[2], &features[3],
                &features[4], &features[5], &features[6], &features[7]);
        sscanf(lbuf, "%d", &expected_class);

        predicted_class = random_forest_idle_predict(features, NR_FEATURES);
        if (predicted_class == expected_class)
            accurate++;
        count++;
    }
    printf("count: %d acurate: %d accuracy: %f\n", count, accurate, accurate*1.0 / count);
    fclose(fp);
    fclose(lfp);
}

int main(int argc, char* argv[]) {
    char* features = "features.csv";
    char* labels = "labels.csv";

    if (argc == 3) {
        features = argv[1];
        labels = argv[2];
    }

    return predict_from_csv(features, labels);
}
