#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass RALS_GroundedEntryState_AnimNotify.RALS_GroundedEntryState_AnimNotify_C
class URALS_GroundedEntryState_AnimNotify_C : public UAnimNotify
{
public:
	enum class ERALS_GroundedEntryState          Grounded_Entry_State;                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URALS_GroundedEntryState_AnimNotify_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IRALS_Animation_BPI_C> K2Node_DynamicCast_AsRALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


