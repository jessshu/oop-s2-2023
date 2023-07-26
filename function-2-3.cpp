# include <iostream> 

void two_five_nine(int array[], int n) {

    // initialise counters 
    int two_count = 0;
    int five_count = 0; 
    int nine_count = 0; 

    // loop over all elements of array 
    for (int i = 0; i < n; i++) {
        
        //switch statement to determine number 
        switch (array[i]) {

            case 2:
            two_count++;
            break; 

            case 5:
            five_count++;
            break; 

            case 9: 
            nine_count++;
            break;

            default:
            std::cout << "There are no 2, 5, or 9s in this array." << std::endl;

        }
    }

    // initialise array to store counts 
    int counts[3] = {}; 

    // concatenate values into counts 
    counts[0] = two_count;
    counts[1] = five_count;
    counts[2] = nine_count;

    // print out results 
    std::cout << "2:" << two_count << ";5:" << five_count << ";9:" << nine_count << ";" << std::endl;

    return;    // HOW TF?????!?!?!?!?!?
}