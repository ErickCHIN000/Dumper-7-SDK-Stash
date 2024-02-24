#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass AnimNotify_ChooseDamageSource.AnimNotify_ChooseDamageSource_C
class UAnimNotify_ChooseDamageSource_C : public UAnimNotify_PlayMontageNotify
{
public:
	class FName                                  DamageSourceSocketName;                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotify_ChooseDamageSource_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetNotifyName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}


