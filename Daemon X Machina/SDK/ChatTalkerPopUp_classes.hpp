#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x408 - 0x3F8)
// BlueprintGeneratedClass ChatTalkerPopUp.ChatTalkerPopUp_C
class AChatTalkerPopUp_C : public ATTLChatTalkerPopUp
{
public:
	class UUIChatTalkerScrollListComponent_C*    UIChatTalkerScrollListComponent;                   // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChatTalkerPopUp_C* GetDefaultObj();

	bool Destroy_InlineKeyboardBP(bool CallFunc_IsValid_ReturnValue);
	bool Create_InlineKeyboardBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AInlineKeyboardActor_C* CallFunc_FinishSpawningActor_ReturnValue);
	bool SetAnimationFromBP(class UOnl_chat_page02_C* K2Node_DynamicCast_AsOnl_Chat_Page_02, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
};

}


