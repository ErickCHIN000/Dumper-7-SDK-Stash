#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C
class UGroundedEntryState_AnimNotify_C : public UAnimNotify
{
public:
	enum class EGroundedEntryState               Grounded_Entry_State;                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGroundedEntryState_AnimNotify_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IALS_Animation_BPI_C> K2Node_DynamicCast_AsALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


