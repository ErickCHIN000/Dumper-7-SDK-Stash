#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C
// (Actor)

class UClass* ABP_PlayerPreview_HAB_Selection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerPreview_HAB_Selection_C");

	return Clss;
}


// BP_PlayerPreview_HAB_Selection_C BP_PlayerPreview_HAB_Selection.Default__BP_PlayerPreview_HAB_Selection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerPreview_HAB_Selection_C* ABP_PlayerPreview_HAB_Selection_C::GetDefaultObj()
{
	static class ABP_PlayerPreview_HAB_Selection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerPreview_HAB_Selection_C*>(ABP_PlayerPreview_HAB_Selection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.ResolveVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_HAB_Selection_C::ResolveVisibility(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_Selection_C", "ResolveVisibility");

	Params::ABP_PlayerPreview_HAB_Selection_C_ResolveVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.SetCharacterSelectionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CharacterSelection_C*   CharacterSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerPreview_HAB_Selection_C::SetCharacterSelectionWidget(class UUMG_CharacterSelection_C* CharacterSelection, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerPreview_HAB_Selection_C", "SetCharacterSelectionWidget");

	Params::ABP_PlayerPreview_HAB_Selection_C_SetCharacterSelectionWidget_Params Parms{};

	Parms.CharacterSelection = CharacterSelection;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


