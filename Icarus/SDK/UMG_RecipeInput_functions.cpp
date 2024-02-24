#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeInput.UMG_RecipeInput_C
// (None)

class UClass* UUMG_RecipeInput_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeInput_C");

	return Clss;
}


// UMG_RecipeInput_C UMG_RecipeInput.Default__UMG_RecipeInput_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeInput_C* UUMG_RecipeInput_C::GetDefaultObj()
{
	static class UUMG_RecipeInput_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeInput_C*>(UUMG_RecipeInput_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeInput.UMG_RecipeInput_C.IsOutput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_RecipeInput_C::IsOutput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "IsOutput");

	Params::UUMG_RecipeInput_C_IsOutput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.CurrentAmountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RecipeInput_C::CurrentAmountUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "CurrentAmountUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.UpdateBackgroundImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProcessorPreview       Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeInput_C::UpdateBackgroundImage(class UTexture2D* Texture, enum class EProcessorPreview Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "UpdateBackgroundImage");

	Params::UUMG_RecipeInput_C_UpdateBackgroundImage_Params Parms{};

	Parms.Texture = Texture;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.Intialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// enum class EIcarusResourceType     NewResourceType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Output                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceImage_ReturnValue                            (HasGetValueTypeHash)
// bool                               CallFunc_IsResource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)

void UUMG_RecipeInput_C::Intialise(const struct FItemData& NewItem, enum class EIcarusResourceType NewResourceType, int32 Multiplier, bool Output, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, bool CallFunc_IsResource_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "Intialise");

	Params::UUMG_RecipeInput_C_Intialise_Params Parms{};

	Parms.NewItem = NewItem;
	Parms.NewResourceType = NewResourceType;
	Parms.Multiplier = Multiplier;
	Parms.Output = Output;
	Parms.CallFunc_GetResourceImage_ReturnValue = CallFunc_GetResourceImage_ReturnValue;
	Parms.CallFunc_IsResource_ReturnValue = CallFunc_IsResource_ReturnValue;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeInput_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "PreConstruct");

	Params::UUMG_RecipeInput_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RecipeInput_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.ExecuteUbergraph_UMG_RecipeInput
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeInput_C::ExecuteUbergraph_UMG_RecipeInput(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "ExecuteUbergraph_UMG_RecipeInput");

	Params::UUMG_RecipeInput_C_ExecuteUbergraph_UMG_RecipeInput_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeInput.UMG_RecipeInput_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_RecipeInput_C*          SelectedRecipe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeInput_C::Selected__DelegateSignature(class UUMG_RecipeInput_C* SelectedRecipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeInput_C", "Selected__DelegateSignature");

	Params::UUMG_RecipeInput_C_Selected__DelegateSignature_Params Parms{};

	Parms.SelectedRecipe = SelectedRecipe;

	UObject::ProcessEvent(Func, &Parms);

}

}


