#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MailHover.WBP_MailHover_C
// (None)

class UClass* UWBP_MailHover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MailHover_C");

	return Clss;
}


// WBP_MailHover_C WBP_MailHover.Default__WBP_MailHover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MailHover_C* UWBP_MailHover_C::GetDefaultObj()
{
	static class UWBP_MailHover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MailHover_C*>(UWBP_MailHover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MailHover.WBP_MailHover_C.InitializeForParent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MailItem_C*             ParentItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TitleText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        BodyText                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_MailHover_C::InitializeForParent(class UWBP_MailItem_C* ParentItem, class FText TitleText, class FText BodyText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MailHover_C", "InitializeForParent");

	Params::UWBP_MailHover_C_InitializeForParent_Params Parms{};

	Parms.ParentItem = ParentItem;
	Parms.TitleText = TitleText;
	Parms.BodyText = BodyText;

	UObject::ProcessEvent(Func, &Parms);

}

}


