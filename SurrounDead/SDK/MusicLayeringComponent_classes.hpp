#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE0 - 0xA0)
// BlueprintGeneratedClass MusicLayeringComponent.MusicLayeringComponent_C
class UMusicLayeringComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundBase*>                    LayerList;                                         // 0xA8(0x10)(Edit, BlueprintVisible)
	float                                        Volume;                                            // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2394[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAudioComponent*>               LayerReferences;                                   // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        NextTrackToPlay;                                   // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CurrentTrack;                                      // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMusicLayeringComponent_C* GetDefaultObj();

	void Initialise();
	void NextTrack();
	void StopTrack();
	void ExecuteUbergraph_MusicLayeringComponent(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USoundBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UAudioComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


