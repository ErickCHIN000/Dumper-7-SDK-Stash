#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeElementImage.UMG_RecipeElementImage_C
// (None)

class UClass* UUMG_RecipeElementImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeElementImage_C");

	return Clss;
}


// UMG_RecipeElementImage_C UMG_RecipeElementImage.Default__UMG_RecipeElementImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeElementImage_C* UUMG_RecipeElementImage_C::GetDefaultObj()
{
	static class UUMG_RecipeElementImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeElementImage_C*>(UUMG_RecipeElementImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeElementImage.UMG_RecipeElementImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementImage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementImage_C", "PreConstruct");

	Params::UUMG_RecipeElementImage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElementImage.UMG_RecipeElementImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RecipeElementImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElementImage.UMG_RecipeElementImage_C.ExecuteUbergraph_UMG_RecipeElementImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElementImage_C::ExecuteUbergraph_UMG_RecipeElementImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElementImage_C", "ExecuteUbergraph_UMG_RecipeElementImage");

	Params::UUMG_RecipeElementImage_C_ExecuteUbergraph_UMG_RecipeElementImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


