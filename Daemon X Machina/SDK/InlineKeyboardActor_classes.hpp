#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C8 - 0x3C0)
// BlueprintGeneratedClass InlineKeyboardActor.InlineKeyboardActor_C
class AInlineKeyboardActor_C : public ATTLInlineKeyboardActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AInlineKeyboardActor_C* GetDefaultObj();

	class ATTLCommonPopup* SpawnPopup_CommonBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACommonPopUp_C* CallFunc_FinishSpawningActor_ReturnValue);
	void UserConstructionScript();
};

}


