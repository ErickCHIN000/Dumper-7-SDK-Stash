#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class SurrounDead.DistanceSort
class UDistanceSort : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDistanceSort* GetDefaultObj();

	void Distance_Sort(const TArray<class AActor*>& Array_To_Sort, class AActor* From_Actor, bool Descending, TArray<struct FActor_Dist>* Sorted_Array);
};

// 0x0 (0x28 - 0x28)
// Class SurrounDead.GetStreamedLevel
class UGetStreamedLevel : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGetStreamedLevel* GetDefaultObj();

	class FName GetActorStreamingLevelName(class AActor* Actor);
};

}


