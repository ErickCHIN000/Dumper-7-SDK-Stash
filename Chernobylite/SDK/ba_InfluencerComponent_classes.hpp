#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2A8 - 0x220)
// BlueprintGeneratedClass ba_InfluencerComponent.ba_InfluencerComponent_C
class Aba_InfluencerComponent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInfluencerComponentValue>     Values;                                            // 0x230(0x10)(Edit, BlueprintVisible, SaveGame)
	bool                                         IsInfluencingactive;                               // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2745[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class Enum_MoraleStimulant, float> MoraleInfluence;                                   // 0x248(0x50)(Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>           GivenRecipes;                                      // 0x298(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class Aba_InfluencerComponent_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void GetisInfluencingActive(bool* Output_Get);
	void ToggleIsInfluencingActive(bool IsInfluencingactive, bool DidChange, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_ForgetRecipe_OutSomethingDeleted, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance);
	void LoadingFinished();
	void PrepareDataForSave();
	void ExecuteUbergraph_ba_InfluencerComponent(int32 EntryPoint);
};

}


