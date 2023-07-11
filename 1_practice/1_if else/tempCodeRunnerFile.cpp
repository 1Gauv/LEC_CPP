
    scanRollandName();
    cout<<endl<<"Memory allocated dynamically for name and roll";
    cout<<endl<<"Value of Name and Roll before deallocation";
    printRollandName();
    freeMemory();
    cout<<"\n\nAfter Deallocation: ";
    printRollandName();
    return 0;
}