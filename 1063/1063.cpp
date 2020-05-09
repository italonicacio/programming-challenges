#include <iostream>



class Stack
{
    public:
    
        Stack( int size_stack ) : top( -1 ), size_stack( size_stack )
        {}

        void Push( char wagon_identification)
        {
            std::cout << "I";
            this->array[ ++this->top ] = wagon_identification;
        }

        void Pop()
        {
            std::cout << "R";
            --this->top;
        }

        bool IsEmpty()
        {
            if( this->top == -1 )
                return true;
            else
                return false;
        }

        bool CompareTopChars( char c )
        {
            if( c == this->array[this->top] )
                return true;
            else
                return false;

        }

    private:
        char array[26];
        int top;
        int size_stack;

};


int main()
{
    
    char sequence_wagons_A[26]; 
    char wagons_organization[26];

    while( true )
    {

        int total_wagons;
        std::cin >> total_wagons;
        
        if( total_wagons == 0)
            break;

        Stack stack( total_wagons );

        for( int i = 0; i < total_wagons; i++ )
        {
            std::cin >> sequence_wagons_A[i];
        }

        for( int i = 0; i < total_wagons; i++ )
        {
            std::cin >> wagons_organization[i];
        }

        int i = 0,j = 0;

        while( true )
        {
            if( !stack.IsEmpty() && stack.CompareTopChars( wagons_organization[j] ) )
            {
                stack.Pop();
                j++;
            }else if( i < total_wagons ){
                stack.Push( sequence_wagons_A[i] );
                i++;
            }else
                break;
                     
        } 

        if( stack.IsEmpty() )
            std::cout << std::endl;
        else
            std::cout << " Impossible" << std::endl;
        
    }
    
    return 0;
}