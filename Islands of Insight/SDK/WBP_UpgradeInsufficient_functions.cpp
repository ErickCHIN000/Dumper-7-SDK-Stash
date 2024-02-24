#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UpgradeInsufficient.WBP_UpgradeInsufficient_C
// (None)

class UClass* UWBP_UpgradeInsufficient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UpgradeInsufficient_C");

	return Clss;
}


// WBP_UpgradeInsufficient_C WBP_UpgradeInsufficient.Default__WBP_UpgradeInsufficient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UpgradeInsufficient_C* UWBP_UpgradeInsufficient_C::GetDefaultObj()
{
	static class UWBP_UpgradeInsufficient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UpgradeInsufficient_C*>(UWBP_UpgradeInsufficient_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_UpgradeInsufficient.WBP_UpgradeInsufficient_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UpgradeInsufficient_C::PlayAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_UpgradeInsufficient_C", "PlayAnim");

	Params::UWBP_UpgradeInsufficient_C_PlayAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


