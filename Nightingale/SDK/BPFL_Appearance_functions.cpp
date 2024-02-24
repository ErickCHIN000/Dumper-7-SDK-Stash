#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Appearance.BPFL_Appearance_C
// (None)

class UClass* UBPFL_Appearance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Appearance_C");

	return Clss;
}


// BPFL_Appearance_C BPFL_Appearance.Default__BPFL_Appearance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Appearance_C* UBPFL_Appearance_C::GetDefaultObj()
{
	static class UBPFL_Appearance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Appearance_C*>(UBPFL_Appearance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Appearance.BPFL_Appearance_C.GetOutfitItems
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         DT_Row                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCharacterAppearance_OutfitData>Out_Items                                                        (Parm, OutParm)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterAppearance_Preset CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Appearance_C::GetOutfitItems(const struct FDataTableRowHandle& DT_Row, class UObject* __WorldContext, TArray<struct FCharacterAppearance_OutfitData>* Out_Items, bool* Valid, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Appearance_C", "GetOutfitItems");

	Params::UBPFL_Appearance_C_GetOutfitItems_Params Parms{};

	Parms.DT_Row = DT_Row;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Items != nullptr)
		*Out_Items = std::move(Parms.Out_Items);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}

}


