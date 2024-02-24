#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C
// (None)

class UClass* UWBP_HUD_Structure_Traits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Structure_Traits_C");

	return Clss;
}


// WBP_HUD_Structure_Traits_C WBP_HUD_Structure_Traits.Default__WBP_HUD_Structure_Traits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Structure_Traits_C* UWBP_HUD_Structure_Traits_C::GetDefaultObj()
{
	static class UWBP_HUD_Structure_Traits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Structure_Traits_C*>(UWBP_HUD_Structure_Traits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C.RemoveTrait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTrait             Trait                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Structure_TraitEntry_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Traits_C::RemoveTrait(const struct FStructureTrait& Trait, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UWBP_HUD_Structure_TraitEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Traits_C", "RemoveTrait");

	Params::UWBP_HUD_Structure_Traits_C_RemoveTrait_Params Parms{};

	Parms.Trait = Trait;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C.RefreshVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Traits_C::RefreshVisibility(bool CallFunc_HasAnyChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Traits_C", "RefreshVisibility");

	Params::UWBP_HUD_Structure_Traits_C_RefreshVisibility_Params Parms{};

	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C.AddTrait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureTrait             NewTrait                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               bIsNegative                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_HUD_Structure_TraitEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Traits_C::AddTrait(const struct FStructureTrait& NewTrait, bool bIsNegative, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Map_Contains_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_TraitEntry_C* CallFunc_Create_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Traits_C", "AddTrait");

	Params::UWBP_HUD_Structure_Traits_C_AddTrait_Params Parms{};

	Parms.NewTrait = NewTrait;
	Parms.bIsNegative = bIsNegative;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Traits_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Traits_C", "PreConstruct");

	Params::UWBP_HUD_Structure_Traits_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_Traits.WBP_HUD_Structure_Traits_C.ExecuteUbergraph_WBP_HUD_Structure_Traits
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_Traits_C::ExecuteUbergraph_WBP_HUD_Structure_Traits(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_Traits_C", "ExecuteUbergraph_WBP_HUD_Structure_Traits");

	Params::UWBP_HUD_Structure_Traits_C_ExecuteUbergraph_WBP_HUD_Structure_Traits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


