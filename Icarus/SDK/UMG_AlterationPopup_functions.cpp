#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AlterationPopup.UMG_AlterationPopup_C
// (None)

class UClass* UUMG_AlterationPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AlterationPopup_C");

	return Clss;
}


// UMG_AlterationPopup_C UMG_AlterationPopup.Default__UMG_AlterationPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AlterationPopup_C* UUMG_AlterationPopup_C::GetDefaultObj()
{
	static class UUMG_AlterationPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AlterationPopup_C*>(UUMG_AlterationPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AlterationPopup.UMG_AlterationPopup_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAlterationsRowHandle       Alteration                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UUMG_AlterationDescription_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAlterationsEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationPopup_C::Setup(const struct FAlterationsRowHandle& Alteration, class UUMG_AlterationDescription_C* CallFunc_Create_ReturnValue, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationPopup_C", "Setup");

	Params::UUMG_AlterationPopup_C_Setup_Params Parms{};

	Parms.Alteration = Alteration;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


