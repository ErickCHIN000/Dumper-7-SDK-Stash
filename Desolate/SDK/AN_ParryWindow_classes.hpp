#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass AN_ParryWindow.AN_ParryWindow_C
class UAN_ParryWindow_C : public UAnimNotify
{
public:
	enum class EMeleeSwingState                  SwingState;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_ParryWindow_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class ASHCharacter* Character, enum class EMeleeSwingState Temp_byte_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, class ASHCharacter* K2Node_DynamicCast_AsSHCharacter, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool K2Node_Select_Default);
};

}


