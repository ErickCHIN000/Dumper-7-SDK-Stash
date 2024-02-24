#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5A0 - 0x590)
// BlueprintGeneratedClass BP_TitleScreenController.BP_TitleScreenController_C
class ABP_TitleScreenController_C : public AIcarusTitlePlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x590(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_UserInterface_TitleScreen_C*      UserInterface;                                     // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TitleScreenController_C* GetDefaultObj();

	void GetUserInterface(class UUMG_UserInterface_Base_C** UserInterface);
	void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputActionEvent_0(const struct FKey& Key);
	void SetConnectingUI();
	void CreateUI();
	void ReceiveBeginPlay();
	void OnEndRetryJoinServer();
	void OnBeginRetryJoinServer(int32 JoinAttempt, int32 MaxAttempts);
	void ExecuteUbergraph_BP_TitleScreenController(int32 EntryPoint, int32 K2Node_Event_JoinAttempt, int32 K2Node_Event_MaxAttempts, bool CallFunc_IsOnlineSubsystemIcarusEnabled_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue_1, class ABP_SpaceMenuCamera_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key);
};

}


