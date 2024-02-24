#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropSelectionMapTile.UMG_DropSelectionMapTile_C
// (None)

class UClass* UUMG_DropSelectionMapTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropSelectionMapTile_C");

	return Clss;
}


// UMG_DropSelectionMapTile_C UMG_DropSelectionMapTile.Default__UMG_DropSelectionMapTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropSelectionMapTile_C* UUMG_DropSelectionMapTile_C::GetDefaultObj()
{
	static class UUMG_DropSelectionMapTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropSelectionMapTile_C*>(UUMG_DropSelectionMapTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropSelectionMapTile.UMG_DropSelectionMapTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropSelectionMapTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropSelectionMapTile_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropSelectionMapTile.UMG_DropSelectionMapTile_C.ExecuteUbergraph_UMG_DropSelectionMapTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropSelectionMapTile_C::ExecuteUbergraph_UMG_DropSelectionMapTile(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropSelectionMapTile_C", "ExecuteUbergraph_UMG_DropSelectionMapTile");

	Params::UUMG_DropSelectionMapTile_C_ExecuteUbergraph_UMG_DropSelectionMapTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


