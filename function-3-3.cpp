# include <iostream> 

double weighted_average(int array[], int n) {
    // if n is less than 1 return false 
    if (n < 1) {
        return 0;
    }

    // initalise variables 
    double total_ave = 0;
    double ind_ave = 0;
    int i = 0;
    int temp_var = 0;
    int counter = 0;

    while (i < n) {
        counter = 0;
        temp_var = array[i];
        for (int j = 0; j < n; j++) {
            if (temp_var == array[i])
            counter++; // increment counter
        }
        ind_ave = (array[i]*counter) / n;
        total_ave = total_ave + ind_ave;
        i++;
    }

    return total_ave;
}