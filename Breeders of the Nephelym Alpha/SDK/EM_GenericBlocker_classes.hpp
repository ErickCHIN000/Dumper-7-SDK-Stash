#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3F8 - 0x3D8)
// BlueprintGeneratedClass EM_GenericBlocker.EM_GenericBlocker_C
class AEM_GenericBlocker_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Activated;                                         // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        BlockActors;                                       // 0x3E8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class AEM_GenericBlocker_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void Reset();
	void OnBlock(bool bFromActivation);
	void ExecuteUbergraph_EM_GenericBlocker(int32 EntryPoint, bool K2Node_Event_bFromActivation, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool K2Node_Event_bFromActivation_1, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


