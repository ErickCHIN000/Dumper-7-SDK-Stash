#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2D8 - 0x2A0)
// BlueprintGeneratedClass BP_LaptopEventManager.BP_LaptopEventManager_C
class ABP_LaptopEventManager_C : public ABP_MasterObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            RandomEvent;                                       // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UClass*>                        Quests;                                            // 0x2B8(0x10)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            SelectCertainLocation;                             // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_LaptopEventManager_C* GetDefaultObj();

	void CallRandomEvent(class UNarrativeComponent* CallFunc_GetNarrativeComponent_ReturnValue, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class UQuest* CallFunc_BeginQuest_ReturnValue);
	void ReceiveBeginPlay();
	void Event_Random();
	void ExecuteUbergraph_BP_LaptopEventManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SelectCertainLocation__DelegateSignature(class AActor* Actor, class ABP_LaptopEventMaster_C* Event);
	void RandomEvent__DelegateSignature();
};

}


