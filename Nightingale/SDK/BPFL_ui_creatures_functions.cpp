#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ui_creatures.BPFL_ui_creatures_C
// (None)

class UClass* UBPFL_ui_creatures_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ui_creatures_C");

	return Clss;
}


// BPFL_ui_creatures_C BPFL_ui_creatures.Default__BPFL_ui_creatures_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ui_creatures_C* UBPFL_ui_creatures_C::GetDefaultObj()
{
	static class UBPFL_ui_creatures_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ui_creatures_C*>(UBPFL_ui_creatures_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ui_creatures.BPFL_ui_creatures_C.BreakCreatureUIInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         CreatureUIINfoHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CreatureName                                                     (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   CreatureIcon                                                     (Parm, OutParm, HasGetValueTypeHash)
// int32                              FerocityMin                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FerocityMax                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBiomeID>        Biomes                                                           (Parm, OutParm)
// bool                               ShowNameplate                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidRowHandle_IsValid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureUIData           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_creatures_C::BreakCreatureUIInfo(const struct FDataTableRowHandle& CreatureUIINfoHandle, class UObject* __WorldContext, class FText* CreatureName, TSoftObjectPtr<class UTexture2D>* CreatureIcon, int32* FerocityMin, int32* FerocityMax, TArray<enum class EBiomeID>* Biomes, bool* ShowNameplate, bool CallFunc_IsValidRowHandle_IsValid, const struct FS_CreatureUIData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_creatures_C", "BreakCreatureUIInfo");

	Params::UBPFL_ui_creatures_C_BreakCreatureUIInfo_Params Parms{};

	Parms.CreatureUIINfoHandle = CreatureUIINfoHandle;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValidRowHandle_IsValid = CallFunc_IsValidRowHandle_IsValid;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatureName != nullptr)
		*CreatureName = Parms.CreatureName;

	if (CreatureIcon != nullptr)
		*CreatureIcon = Parms.CreatureIcon;

	if (FerocityMin != nullptr)
		*FerocityMin = Parms.FerocityMin;

	if (FerocityMax != nullptr)
		*FerocityMax = Parms.FerocityMax;

	if (Biomes != nullptr)
		*Biomes = std::move(Parms.Biomes);

	if (ShowNameplate != nullptr)
		*ShowNameplate = Parms.ShowNameplate;

}

}


