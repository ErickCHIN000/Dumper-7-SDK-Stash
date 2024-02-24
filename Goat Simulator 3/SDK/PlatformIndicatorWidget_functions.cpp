#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlatformIndicatorWidget.PlatformIndicatorWidget_C
// (None)

class UClass* UPlatformIndicatorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlatformIndicatorWidget_C");

	return Clss;
}


// PlatformIndicatorWidget_C PlatformIndicatorWidget.Default__PlatformIndicatorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlatformIndicatorWidget_C* UPlatformIndicatorWidget_C::GetDefaultObj()
{
	static class UPlatformIndicatorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlatformIndicatorWidget_C*>(UPlatformIndicatorWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlatformIndicatorWidget.PlatformIndicatorWidget_C.UpdatePlatformIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFriendPlatform         Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEpicAccountLinked_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlatformIndicatorWidget_C::UpdatePlatformIndicator(enum class EFriendPlatform Platform, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool CallFunc_IsEpicAccountLinked_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlatformIndicatorWidget_C", "UpdatePlatformIndicator");

	Params::UPlatformIndicatorWidget_C_UpdatePlatformIndicator_Params Parms{};

	Parms.Platform = Platform;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.CallFunc_IsEpicAccountLinked_ReturnValue = CallFunc_IsEpicAccountLinked_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


