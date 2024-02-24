#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass AnimNotify_PreventAttacking.AnimNotify_PreventAttacking_C
class UAnimNotify_PreventAttacking_C : public UAnimNotify
{
public:
	bool                                         AttacksEnabled;                                    // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UAnimNotify_PreventAttacking_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_FactionBoss_Base_C* K2Node_DynamicCast_AsBP_Faction_Boss_Base, bool K2Node_DynamicCast_bSuccess);
	class FString GetNotifyName(const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


