case 2://number case that adds new integer to array
      
    cout << "What number would you like to add?" << endl;
    try {
      cin >> newVal;
      if(newVal <= 0)
      {
        throw 1;
      }
      }
      catch(int bad){
        cout << "input something that works" << endl;
      }
    for(count =0; count < arrSize; count++){
      //cin >> newVal;
    }
      numbers[100] = newVal;
      cout << endl;
    break;


case 5://case to modify number at certain index specified by user.
    cout << "what is the index of the number you would like to change ?";
        try{
        cin >> numbers[count];
          if(count >= 100){
            cout << "input should be less than 100" << endl;
            throw 99;
            }
          }
          catch(int under){
          cout << "Please check that input is valid under given circumstances" <<endl;
            }
    cin >> numbers[count];
        cout << "what number would you like to change it to?" << endl;
        cin >> newNum;
        numbers[count]=newNum;

      break;
