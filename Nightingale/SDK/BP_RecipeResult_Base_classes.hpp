#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_RecipeResult_Base.BP_RecipeResult_Base_C
class UBP_RecipeResult_Base_C : public UCraftingResultObject
{
public:

	static class UClass* StaticClass();
	static class UBP_RecipeResult_Base_C* GetDefaultObj();

	bool CanExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData);
	bool CanProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData);
	TArray<class UItemProcessingDataAsset*> ExecuteAction(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess);
	TArray<class UItemProcessingDataAsset*> ProcessData(class AActor* InstigatingActor, class AActor* TargetActor, struct FItemProcessingContext& Context, TArray<struct FInventoryEntry>& InputItems, TArray<class UItemProcessingDataAsset*>& ProcessingData, bool* bSuccess);
};

}


