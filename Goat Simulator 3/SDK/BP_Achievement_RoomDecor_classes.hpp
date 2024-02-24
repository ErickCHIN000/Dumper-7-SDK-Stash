#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x260 - 0x240)
// BlueprintGeneratedClass BP_Achievement_RoomDecor.BP_Achievement_RoomDecor_C
class ABP_Achievement_RoomDecor_C : public ABP_AchievementBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Total_Decoration_Amount;                           // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_972[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Currently_Changed_Decorations;                     // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Achievement_RoomDecor_C* GetDefaultObj();

	void OnAchievementInitialize();
	void OnDecorateRoom(class AActor* DecorationActor);
	void ExecuteUbergraph_BP_Achievement_RoomDecor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AActor* K2Node_CustomEvent_DecorationActor, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


