#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C
// (None)

class UClass* UUMG_FieldGuide_List_Category_Bestiary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_List_Category_Bestiary_C");

	return Clss;
}


// UMG_FieldGuide_List_Category_Bestiary_C UMG_FieldGuide_List_Category_Bestiary.Default__UMG_FieldGuide_List_Category_Bestiary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_List_Category_Bestiary_C* UUMG_FieldGuide_List_Category_Bestiary_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_List_Category_Bestiary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_List_Category_Bestiary_C*>(UUMG_FieldGuide_List_Category_Bestiary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C.ClickedInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_Bestiary_C::ClickedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Bestiary_C", "ClickedInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C.ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Bestiary_C::ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Bestiary_C", "ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary");

	Params::UUMG_FieldGuide_List_Category_Bestiary_C_ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C.FilterBestiary__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTerrainsRowHandle          Map                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FAtmospheresRowHandle       Atmosphere                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Bestiary_C::FilterBestiary__DelegateSignature(const struct FTerrainsRowHandle& Map, const struct FAtmospheresRowHandle& Atmosphere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Bestiary_C", "FilterBestiary__DelegateSignature");

	Params::UUMG_FieldGuide_List_Category_Bestiary_C_FilterBestiary__DelegateSignature_Params Parms{};

	Parms.Map = Map;
	Parms.Atmosphere = Atmosphere;

	UObject::ProcessEvent(Func, &Parms);

}

}


