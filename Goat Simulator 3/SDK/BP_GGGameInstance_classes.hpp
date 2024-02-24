#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x288 - 0x270)
// BlueprintGeneratedClass BP_GGGameInstance.BP_GGGameInstance_C
class UBP_GGGameInstance_C : public UGGGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundSubmix*>                  SubmixesToClear;                                   // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_GGGameInstance_C* GetDefaultObj();

	void OnWorldCleanupEvent(class UWorld* World, bool bSessionEnded, bool bCleanupResources);
	void ReceiveInit();
	void ExecuteUbergraph_BP_GGGameInstance(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWorld* K2Node_Event_World, bool K2Node_Event_bSessionEnded, bool K2Node_Event_bCleanupResources, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class USoundSubmix* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasObjectValidWorld_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


