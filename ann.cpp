  int main()
  {
    printf("i did this . i am so proud of me\n");
    
    for (int epoch = 0; epoch <orj; ++epoch)
    {
      for (size = 0; size <3609; ++size)
      {

        forward();

        Log_error();
        bacth_error[epoch] += se; // summission of sq of error

        back_prpgtn();
        learn_wts();
      }

      bacth_error[epoch] = bacth_error[epoch] / 3609; // mean of error

      {
        cout << " Logerror for batch :" << epoch<< " "<<bacth_error[epoch] << endl;
      }
    }

    cout<<"storing weights"<<endl;
    store_weights(hl1_wts, hl2_wts, ol_wts, "weights.dat");
   return 0;
  
