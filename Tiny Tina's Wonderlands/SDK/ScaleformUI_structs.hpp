#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EASType : uint8
{
	Undefined                      = 0,
	Null                           = 1,
	Boolean                        = 2,
	Int                            = 3,
	Number                         = 4,
	String                         = 5,
	StringW                        = 6,
	Object                         = 7,
	DisplayObject                  = 8,
	EASType_MAX                    = 9,
};

enum class EGFxAlign : uint8
{
	Center                         = 0,
	TopCenter                      = 1,
	BottomCenter                   = 2,
	CenterLeft                     = 3,
	CenterRight                    = 4,
	TopLeft                        = 5,
	TopRight                       = 6,
	BottomLeft                     = 7,
	BottomRight                    = 8,
	EGFxAlign_MAX                  = 9,
};

enum class EGFxTimingMode : uint8
{
	Game                           = 0,
	Real                           = 1,
	EGFxTimingMode_MAX             = 2,
};

enum class EGFxScaleMode : uint8
{
	NoScale                        = 0,
	ShowAll                        = 1,
	ExactFit                       = 2,
	NoBorder                       = 3,
	EGFxScaleMode_MAX              = 4,
};

enum class EGFxRenderTextureMode : uint8
{
	Opaque                         = 0,
	Alpha                          = 1,
	AlphaComposite                 = 2,
	EGFxRenderTextureMode_MAX      = 3,
};

enum class EGFxHitTestType : uint8
{
	HitTest_Bounds                 = 0,
	HitTest_Shapes                 = 1,
	HitTest_ButtonEvents           = 2,
	HitTest_ShapesNoInvisible      = 3,
	HitTest_MAX                    = 4,
};

enum class EGbxGFxMovieGetChildStrategy : uint8
{
	Default                        = 0,
	ByTable                        = 1,
	ByTableThenPath                = 2,
	ByPath                         = 3,
	ByPathThenTable                = 4,
	ByBreadthFirstSearch           = 5,
	ByDistributedSearch            = 6,
	TEST_CASE                      = 7,
	EGbxGFxMovieGetChildStrategy_MAX = 8,
};

enum class EFlashTextureRescale : uint8
{
	FlashTextureScale_High         = 0,
	FlashTextureScale_Low          = 1,
	FlashTextureScale_NextLow      = 2,
	FlashTextureScale_Mult4        = 3,
	FlashTextureScale_None         = 4,
	FlashTextureScale_MAX          = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ScaleformUI.ASColorTransform
struct FASColorTransform
{
public:
	struct FLinearColor                          Multiply;                                          // 0x0(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Add;                                               // 0x10(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ScaleformUI.ASDisplayInfo
struct FASDisplayInfo
{
public:
	struct FVector                               Position;                                          // 0x0(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0xC(0xC)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        XRotation;                                         // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YRotation;                                         // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Visible;                                           // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1051[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ScaleformUI.ASValue
struct FASValue
{
public:
	enum class EASType                           ASType;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ASBoolean;                                         // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1058[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ASInt;                                             // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AsNumber;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AsString;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGFxObject*                            AsObject;                                          // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ScaleformUI.ASPerspectiveTransform
struct FASPerspectiveTransform
{
public:
	struct FVector4                              Row0;                                              // 0x0(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row1;                                              // 0x10(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row2;                                              // 0x20(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                              Row3;                                              // 0x30(0x10)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ScaleformUI.GFxWidgetBinding
struct FGFxWidgetBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                WidgetClass;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ScaleformUI.ExternalTexture
struct FExternalTexture
{
public:
	class FString                                Resource;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ScaleformUI.ScaleformTextureReference
struct FScaleformTextureReference
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                HighDefinitionAsset;                               // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ScaleformUI.ScaleformAssetReference
struct FScaleformAssetReference
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ScaleformUI.FlashNativeBindingInfo
struct FFlashNativeBindingInfo
{
public:
	class FString                                InstanceName;                                      // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullPath;                                          // 0x10(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClosestParentInstanceName;                         // 0x20(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ScaleformUI.GbxGFxBounds
struct FGbxGFxBounds
{
public:
	float                                        Top;                                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Left;                                              // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


