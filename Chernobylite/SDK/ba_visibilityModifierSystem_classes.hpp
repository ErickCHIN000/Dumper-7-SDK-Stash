#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass ba_visibilityModifierSystem.ba_visibilityModifierSystem_C
class Aba_visibilityModifierSystem_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_0_time_5B7A31CA4F9283C0C56E3687532B3C83;  // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_5B7A31CA4F9283C0C56E3687532B3C83; // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_C8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class Aba_visibilityModifierVolume_00_C*> ActiveVisibilityModifierVolumes;                   // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Aba_visibilityModifierSystem_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void VisModVolAdd(class Aba_visibilityModifierVolume_00_C* Volume);
	void VisModVolRemove(class Aba_visibilityModifierVolume_00_C* Volume);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ba_visibilityModifierSystem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class Aba_visibilityModifierVolume_00_C* K2Node_CustomEvent_Volume_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class Aba_visibilityModifierVolume_00_C* K2Node_CustomEvent_Volume, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class Aba_visibilityModifierVolume_00_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_visibilityModifierVolume_00_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
};

}


