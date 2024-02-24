#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_NPCScreen.BPFL_NPCScreen_C
// (None)

class UClass* UBPFL_NPCScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_NPCScreen_C");

	return Clss;
}


// BPFL_NPCScreen_C BPFL_NPCScreen.Default__BPFL_NPCScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_NPCScreen_C* UBPFL_NPCScreen_C::GetDefaultObj()
{
	static class UBPFL_NPCScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_NPCScreen_C*>(UBPFL_NPCScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_NPCScreen.BPFL_NPCScreen_C.GetNPCMenu
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NPC_Row                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_ui_NPCMenus           Menu_Type                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Optional_Minus_Menu_Name_                                        (Parm, OutParm)
// TArray<struct FDataTableRowHandle> Available_Content                                                (Parm, OutParm)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_NPCMenu_Content          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_NPCScreen_C::GetNPCMenu(const struct FDataTableRowHandle& NPC_Row, class UObject* __WorldContext, enum class E_ui_NPCMenus* Menu_Type, class FText* Optional_Minus_Menu_Name_, TArray<struct FDataTableRowHandle>* Available_Content, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FS_NPCMenu_Content& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_NPCScreen_C", "GetNPCMenu");

	Params::UBPFL_NPCScreen_C_GetNPCMenu_Params Parms{};

	Parms.NPC_Row = NPC_Row;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Menu_Type != nullptr)
		*Menu_Type = Parms.Menu_Type;

	if (Optional_Minus_Menu_Name_ != nullptr)
		*Optional_Minus_Menu_Name_ = Parms.Optional_Minus_Menu_Name_;

	if (Available_Content != nullptr)
		*Available_Content = std::move(Parms.Available_Content);

}

}


