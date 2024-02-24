#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C
// (None)

class UClass* UUMG_FieldGuide_List_Category_Fish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_List_Category_Fish_C");

	return Clss;
}


// UMG_FieldGuide_List_Category_Fish_C UMG_FieldGuide_List_Category_Fish.Default__UMG_FieldGuide_List_Category_Fish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_List_Category_Fish_C* UUMG_FieldGuide_List_Category_Fish_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_List_Category_Fish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_List_Category_Fish_C*>(UUMG_FieldGuide_List_Category_Fish_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C.ClickedInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_Fish_C::ClickedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Fish_C", "ClickedInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C.ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Fish_C::ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Fish_C", "ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish");

	Params::UUMG_FieldGuide_List_Category_Fish_C_ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C.FilterFish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFishRarity             Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFishType               Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Fish_C::FilterFish__DelegateSignature(enum class EFishRarity Rarity, enum class EFishType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Fish_C", "FilterFish__DelegateSignature");

	Params::UUMG_FieldGuide_List_Category_Fish_C_FilterFish__DelegateSignature_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}

}


