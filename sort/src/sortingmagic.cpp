#include "sortingmagic.h"

namespace AlgorithmsSort {

vector<int> SortingMagic::QuickSort(vector<int>& Set, int First, int Last)
{
    int pivotElement;

    if(First < Last)
    {
       pivotElement = Pivot(Set, First, Last);
       QuickSort(Set, First, pivotElement-1);
       QuickSort(Set, pivotElement+1, Last);
    }

    return Set;
}

int SortingMagic::Pivot(vector<int>& Set, int First, int Last)
{
    int  p = First;
    int pivotElement = Set[First];

    for(int i = First+1 ; i <= Last ; i++)
    {
        if(Set[i] <= pivotElement)
        {
            p++;
            swap(Set[i], Set[p]);
        }
    }

    swap(Set[p], Set[First]);

    return p;
}

void SortingMagic::Swap(int& ElemA, int& ElemB)
{
    int temp(move(ElemA));
    ElemA = move(ElemB);
    ElemB = move(temp);
}

}  // namespace
