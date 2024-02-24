#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Visual.UMG_CharacterSetting_Visual_C
// (None)

class UClass* UUMG_CharacterSetting_Visual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CharacterSetting_Visual_C");

	return Clss;
}


// UMG_CharacterSetting_Visual_C UMG_CharacterSetting_Visual.Default__UMG_CharacterSetting_Visual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CharacterSetting_Visual_C* UUMG_CharacterSetting_Visual_C::GetDefaultObj()
{
	static class UUMG_CharacterSetting_Visual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CharacterSetting_Visual_C*>(UUMG_CharacterSetting_Visual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CharacterSetting_Visual.UMG_CharacterSetting_Visual_C.GetSelectionDisplayName
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// struct FRowHandle                  CallFunc_GetSelectedOption_SelectedRow                           (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_CastToCharacterCreationDataRowHandle_Paths              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_CastToCharacterCreationDataRowHandle_ReturnValue        (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CharacterSetting_Visual_C::GetSelectionDisplayName(class FText* DisplayName, const struct FRowHandle& CallFunc_GetSelectedOption_SelectedRow, enum class EValid CallFunc_CastToCharacterCreationDataRowHandle_Paths, const struct FCharacterCreationDataRowHandle& CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CharacterSetting_Visual_C", "GetSelectionDisplayName");

	Params::UUMG_CharacterSetting_Visual_C_GetSelectionDisplayName_Params Parms{};

	Parms.CallFunc_GetSelectedOption_SelectedRow = CallFunc_GetSelectedOption_SelectedRow;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_Paths = CallFunc_CastToCharacterCreationDataRowHandle_Paths;
	Parms.CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue = CallFunc_CastToCharacterCreationDataRowHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}

}


