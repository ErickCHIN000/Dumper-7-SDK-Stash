#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x850 - 0x848)
// BlueprintGeneratedClass BP_Zombie_Infected_Horde.BP_Zombie_Infected_Horde_C
class ABP_Zombie_Infected_Horde_C : public ABP_MasterZombie_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x848(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Zombie_Infected_Horde_C* GetDefaultObj();

	void OnNotifyEnd_B68543284987CD1D13B41E99F9665966(class FName NotifyName);
	void OnNotifyBegin_B68543284987CD1D13B41E99F9665966(class FName NotifyName);
	void OnInterrupted_B68543284987CD1D13B41E99F9665966(class FName NotifyName);
	void OnBlendOut_B68543284987CD1D13B41E99F9665966(class FName NotifyName);
	void OnCompleted_B68543284987CD1D13B41E99F9665966(class FName NotifyName);
	void ReceiveBeginPlay();
	void Event_PlayerDead();
	void ExecuteUbergraph_BP_Zombie_Infected_Horde(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


