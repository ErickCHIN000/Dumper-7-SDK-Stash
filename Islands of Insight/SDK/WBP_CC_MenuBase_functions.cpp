#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_MenuBase.WBP_CC_MenuBase_C
// (None)

class UClass* UWBP_CC_MenuBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_MenuBase_C");

	return Clss;
}


// WBP_CC_MenuBase_C WBP_CC_MenuBase.Default__WBP_CC_MenuBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_MenuBase_C* UWBP_CC_MenuBase_C::GetDefaultObj()
{
	static class UWBP_CC_MenuBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_MenuBase_C*>(UWBP_CC_MenuBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_MenuBase.WBP_CC_MenuBase_C.OnSexChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Sex                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_MenuBase_C::OnSexChanged__DelegateSignature(int32 Sex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_MenuBase_C", "OnSexChanged__DelegateSignature");

	Params::UWBP_CC_MenuBase_C_OnSexChanged__DelegateSignature_Params Parms{};

	Parms.Sex = Sex;

	UObject::ProcessEvent(Func, &Parms);

}

}


