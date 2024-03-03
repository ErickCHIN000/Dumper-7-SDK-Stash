#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PB_Raw.WB_PB_Raw_C
// (None)

class UClass* UWB_PB_Raw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PB_Raw_C");

	return Clss;
}


// WB_PB_Raw_C WB_PB_Raw.Default__WB_PB_Raw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PB_Raw_C* UWB_PB_Raw_C::GetDefaultObj()
{
	static class UWB_PB_Raw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PB_Raw_C*>(UWB_PB_Raw_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetMarqueeTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarqueeTiling");

	Params::UWB_PB_Raw_C_SetMarqueeTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     DrawAs                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetMarqueeDrawAs(enum class ESlateBrushDrawType DrawAs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarqueeDrawAs");

	Params::UWB_PB_Raw_C_SetMarqueeDrawAs_Params Parms{};

	Parms.DrawAs = DrawAs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    BarFillType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetBarFillType(enum class EProgressBarFillType BarFillType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetBarFillType");

	Params::UWB_PB_Raw_C_SetBarFillType_Params Parms{};

	Parms.BarFillType = BarFillType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Tint                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetMarqueeTint(const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarqueeTint");

	Params::UWB_PB_Raw_C_SetMarqueeTint_Params Parms{};

	Parms.Tint = Tint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillColorAndOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillColorAndOpacity");

	Params::UWB_PB_Raw_C_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ImageSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetMarqueeImageSize(const struct FVector2D& ImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarqueeImageSize");

	Params::UWB_PB_Raw_C_SetMarqueeImageSize_Params Parms{};

	Parms.ImageSize = ImageSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetBackgroundTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetBackgroundTint(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetBackgroundTint");

	Params::UWB_PB_Raw_C_SetBackgroundTint_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarqueeImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetMarqueeImage(class UObject* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarqueeImage");

	Params::UWB_PB_Raw_C_SetMarqueeImage_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     FillImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillImage(class UObject* FillImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillImage");

	Params::UWB_PB_Raw_C_SetFillImage_Params Parms{};

	Parms.FillImage = FillImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMarquee                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_PB_Raw_C::SetMarquee(bool IsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetMarquee");

	Params::UWB_PB_Raw_C_SetMarquee_Params Parms{};

	Parms.IsMarquee = IsMarquee;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   FillImageSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillImageSize(const struct FVector2D& FillImageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillImageSize");

	Params::UWB_PB_Raw_C_SetFillImageSize_Params Parms{};

	Parms.FillImageSize = FillImageSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetColor");

	Params::UWB_PB_Raw_C_SetColor_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageTiling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushTileType     Tiling                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillImageTiling(enum class ESlateBrushTileType Tiling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillImageTiling");

	Params::UWB_PB_Raw_C_SetFillImageTiling_Params Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetPercent");

	Params::UWB_PB_Raw_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageMargin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Margin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillImageMargin(float Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillImageMargin");

	Params::UWB_PB_Raw_C_SetFillImageMargin_Params Parms{};

	Parms.Margin = Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.SetFillImageDrawAs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateBrushDrawType     Draw_As                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::SetFillImageDrawAs(enum class ESlateBrushDrawType Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "SetFillImageDrawAs");

	Params::UWB_PB_Raw_C_SetFillImageDrawAs_Params Parms{};

	Parms.Draw_As = Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Raw.WB_PB_Raw_C.ExecuteUbergraph_WB_PB_Raw
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_DrawAs                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_BarFillType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Tint                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_ImageSize                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Image                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_FillImage                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsMarquee                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_CustomEvent_FillImageSize                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushTileType     K2Node_CustomEvent_Tiling                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Margin                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_CustomEvent_Draw_As                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Raw_C::ExecuteUbergraph_WB_PB_Raw(int32 EntryPoint, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, enum class ESlateBrushDrawType K2Node_CustomEvent_DrawAs, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, const struct FLinearColor& K2Node_CustomEvent_Tint, const struct FLinearColor& K2Node_CustomEvent_InColor_2, const struct FVector2D& K2Node_CustomEvent_ImageSize, const struct FLinearColor& K2Node_CustomEvent_InColor_1, class UObject* K2Node_CustomEvent_Image, class UObject* K2Node_CustomEvent_FillImage, bool K2Node_CustomEvent_IsMarquee, const struct FVector2D& K2Node_CustomEvent_FillImageSize, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, float K2Node_CustomEvent_InPercent, float K2Node_CustomEvent_Margin, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Raw_C", "ExecuteUbergraph_WB_PB_Raw");

	Params::UWB_PB_Raw_C_ExecuteUbergraph_WB_PB_Raw_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Tiling_1 = K2Node_CustomEvent_Tiling_1;
	Parms.K2Node_CustomEvent_DrawAs = K2Node_CustomEvent_DrawAs;
	Parms.K2Node_CustomEvent_BarFillType = K2Node_CustomEvent_BarFillType;
	Parms.K2Node_CustomEvent_Tint = K2Node_CustomEvent_Tint;
	Parms.K2Node_CustomEvent_InColor_2 = K2Node_CustomEvent_InColor_2;
	Parms.K2Node_CustomEvent_ImageSize = K2Node_CustomEvent_ImageSize;
	Parms.K2Node_CustomEvent_InColor_1 = K2Node_CustomEvent_InColor_1;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_FillImage = K2Node_CustomEvent_FillImage;
	Parms.K2Node_CustomEvent_IsMarquee = K2Node_CustomEvent_IsMarquee;
	Parms.K2Node_CustomEvent_FillImageSize = K2Node_CustomEvent_FillImageSize;
	Parms.K2Node_CustomEvent_InColor = K2Node_CustomEvent_InColor;
	Parms.K2Node_CustomEvent_Tiling = K2Node_CustomEvent_Tiling;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;
	Parms.K2Node_CustomEvent_Margin = K2Node_CustomEvent_Margin;
	Parms.K2Node_CustomEvent_Draw_As = K2Node_CustomEvent_Draw_As;

	UObject::ProcessEvent(Func, &Parms);

}

}


