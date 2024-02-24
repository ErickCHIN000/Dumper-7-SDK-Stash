#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommonPhotoThumb.CommonPhotoThumb_C
// (None)

class UClass* UCommonPhotoThumb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonPhotoThumb_C");

	return Clss;
}


// CommonPhotoThumb_C CommonPhotoThumb.Default__CommonPhotoThumb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonPhotoThumb_C* UCommonPhotoThumb_C::GetDefaultObj()
{
	static class UCommonPhotoThumb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonPhotoThumb_C*>(UCommonPhotoThumb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonPhotoThumb.CommonPhotoThumb_C.Edges Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UCommonPhotoThumb_C::Edges_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "Edges Visibility");

	Params::UCommonPhotoThumb_C_Edges_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.FrameFocusedAndUnfocusedColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UCommonPhotoThumb_C::FrameFocusedAndUnfocusedColor(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "FrameFocusedAndUnfocusedColor");

	Params::UCommonPhotoThumb_C_FrameFocusedAndUnfocusedColor_Params Parms{};

	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_1 = CallFunc_HasAnyUserFocus_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_2 = CallFunc_HasAnyUserFocus_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPhotoThumb_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "PreConstruct");

	Params::UCommonPhotoThumb_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.SetPhotoData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotosData                 PhotoInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPhotoThumb_C::SetPhotoData(const struct FPhotosData& PhotoInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "SetPhotoData");

	Params::UCommonPhotoThumb_C_SetPhotoData_Params Parms{};

	Parms.PhotoInfo = PhotoInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhotoModeGalleryWidget_C*   GalleryReference                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonPage_C*               OwnPage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCommonPhotoThumb_C::Initialize(class UPhotoModeGalleryWidget_C* GalleryReference, class UCommonPage_C* OwnPage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "Initialize");

	Params::UCommonPhotoThumb_C_Initialize_Params Parms{};

	Parms.GalleryReference = GalleryReference;
	Parms.OwnPage = OwnPage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.ResetThumb
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::ResetThumb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "ResetThumb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.UpdatePhoto
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::UpdatePhoto()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "UpdatePhoto");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.DeleteData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::DeleteData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "DeleteData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.ResetThumbAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonPhotoThumb_C::ResetThumbAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "ResetThumbAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.ExecuteUbergraph_CommonPhotoThumb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FPhotosData                 K2Node_MakeStruct_PhotosData                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPhotosData                 K2Node_CustomEvent_PhotoInfo                                     (ZeroConstructor, HasGetValueTypeHash)
// class UPhotoModeGalleryWidget_C*   K2Node_CustomEvent_GalleryReference                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonPage_C*               K2Node_CustomEvent_OwnPage                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPhotoModeDataInterface_C>K2Node_DynamicCast_AsPhoto_Mode_Data_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Screenshot_File_IsValid_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Get_Screenshot_File_2D_Image                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Screenshot_File_Base_Filename                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Screenshot_File_Full_File_Path                      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPhotoThumb_C::ExecuteUbergraph_CommonPhotoThumb(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FPhotosData& K2Node_MakeStruct_PhotosData, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FPhotosData& K2Node_CustomEvent_PhotoInfo, class UPhotoModeGalleryWidget_C* K2Node_CustomEvent_GalleryReference, class UCommonPage_C* K2Node_CustomEvent_OwnPage, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, TScriptInterface<class IPhotoModeDataInterface_C> K2Node_DynamicCast_AsPhoto_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Get_Screenshot_File_IsValid_, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image, const class FString& CallFunc_Get_Screenshot_File_Base_Filename, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path, bool CallFunc_HasAnyUserFocus_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "ExecuteUbergraph_CommonPhotoThumb");

	Params::UCommonPhotoThumb_C_ExecuteUbergraph_CommonPhotoThumb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_PhotosData = K2Node_MakeStruct_PhotosData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_PhotoInfo = K2Node_CustomEvent_PhotoInfo;
	Parms.K2Node_CustomEvent_GalleryReference = K2Node_CustomEvent_GalleryReference;
	Parms.K2Node_CustomEvent_OwnPage = K2Node_CustomEvent_OwnPage;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsPhoto_Mode_Data_Interface = K2Node_DynamicCast_AsPhoto_Mode_Data_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_1 = CallFunc_HasAnyUserFocus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_2 = CallFunc_HasAnyUserFocus_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Screenshot_File_IsValid_ = CallFunc_Get_Screenshot_File_IsValid_;
	Parms.CallFunc_Get_Screenshot_File_2D_Image = CallFunc_Get_Screenshot_File_2D_Image;
	Parms.CallFunc_Get_Screenshot_File_Base_Filename = CallFunc_Get_Screenshot_File_Base_Filename;
	Parms.CallFunc_Get_Screenshot_File_Full_File_Path = CallFunc_Get_Screenshot_File_Full_File_Path;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue_3 = CallFunc_HasAnyUserFocus_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonPhotoThumb.CommonPhotoThumb_C.SendPhoto__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPhotosData                 PhotoData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPhotoThumb_C::SendPhoto__DelegateSignature(const struct FPhotosData& PhotoData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPhotoThumb_C", "SendPhoto__DelegateSignature");

	Params::UCommonPhotoThumb_C_SendPhoto__DelegateSignature_Params Parms{};

	Parms.PhotoData = PhotoData;

	UObject::ProcessEvent(Func, &Parms);

}

}


