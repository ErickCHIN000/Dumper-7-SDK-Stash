#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AntizeInterface.BP_AntizeInterface_C
// (None)

class UClass* IBP_AntizeInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AntizeInterface_C");

	return Clss;
}


// BP_AntizeInterface_C BP_AntizeInterface.Default__BP_AntizeInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_AntizeInterface_C* IBP_AntizeInterface_C::GetDefaultObj()
{
	static class IBP_AntizeInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_AntizeInterface_C*>(IBP_AntizeInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_IsKeyEditing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Editing_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_AntizeInterface_C::MSG_IsKeyEditing(bool* Editing_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AntizeInterface_C", "MSG_IsKeyEditing");

	Params::IBP_AntizeInterface_C_MSG_IsKeyEditing_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Editing_ != nullptr)
		*Editing_ = Parms.Editing_;

}


// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeGameplaySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TemplateUI            Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_AntizeInterface_C::MSG_ChangeGameplaySetting(enum class E_TemplateUI Setting, int32 Index, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AntizeInterface_C", "MSG_ChangeGameplaySetting");

	Params::IBP_AntizeInterface_C_MSG_ChangeGameplaySetting_Params Parms{};

	Parms.Setting = Setting;
	Parms.Index = Index;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_RequestKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Action_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_TemplateControlAction ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TemplateControlAxis   AxisName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 MyKey                                                            (Parm, OutParm, HasGetValueTypeHash)

void IBP_AntizeInterface_C::MSG_RequestKey(bool Action_, enum class E_TemplateControlAction ActionName, enum class E_TemplateControlAxis AxisName, struct FInputChord* MyKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AntizeInterface_C", "MSG_RequestKey");

	Params::IBP_AntizeInterface_C_MSG_RequestKey_Params Parms{};

	Parms.Action_ = Action_;
	Parms.ActionName = ActionName;
	Parms.AxisName = AxisName;

	UObject::ProcessEvent(Func, &Parms);

	if (MyKey != nullptr)
		*MyKey = std::move(Parms.MyKey);

}


// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeInvertMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InvertMouse                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBP_AntizeInterface_C::MSG_ChangeInvertMouse(bool InvertMouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AntizeInterface_C", "MSG_ChangeInvertMouse");

	Params::IBP_AntizeInterface_C_MSG_ChangeInvertMouse_Params Parms{};

	Parms.InvertMouse = InvertMouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AntizeInterface.BP_AntizeInterface_C.MSG_ChangeSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Sensitivity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_AntizeInterface_C::MSG_ChangeSensitivity(float Sensitivity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AntizeInterface_C", "MSG_ChangeSensitivity");

	Params::IBP_AntizeInterface_C_MSG_ChangeSensitivity_Params Parms{};

	Parms.Sensitivity = Sensitivity;

	UObject::ProcessEvent(Func, &Parms);

}

}


