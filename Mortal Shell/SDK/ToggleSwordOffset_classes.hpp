#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass ToggleSwordOffset.ToggleSwordOffset_C
class UToggleSwordOffset_C : public UAnimNotify
{
public:
	bool                                         UseKuboldSet_;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UToggleSwordOffset_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class AHeavyEnemy_C* K2Node_DynamicCast_AsHeavy_Enemy, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


