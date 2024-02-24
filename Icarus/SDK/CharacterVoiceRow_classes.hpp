#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass CharacterVoiceRow.CharacterVoiceRow_C
class UCharacterVoiceRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RowIcon;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RowText;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DisplayName;                                       // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                RowNameStr;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCharacterVoiceRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UCharacterVoiceRow_C* K2Node_DynamicCast_AsCharacter_Voice_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue);
	void Set_Row(class FName RowName);
	void ExecuteUbergraph_CharacterVoiceRow(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue, const struct FCharacterVoiceData& CallFunc_GetCharacterVoicesStruct_CharacterVoices, enum class EValid CallFunc_GetCharacterVoicesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}


