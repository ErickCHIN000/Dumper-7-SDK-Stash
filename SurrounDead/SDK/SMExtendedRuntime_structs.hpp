#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct SMExtendedRuntime.SMTextSerializer
struct FSMTextSerializer
{
public:
	class FName                                  ToTextDynamicFunctionName;                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ToTextFunctionNames;                               // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x30 (0x78 - 0x48)
// ScriptStruct SMExtendedRuntime.SMTextGraphProperty_Runtime
struct FSMTextGraphProperty_Runtime : public FSMGraphProperty_Base_Runtime
{
public:
	class FText                                  Result;                                            // 0x48(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSMTextSerializer                     TextSerializer;                                    // 0x60(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x11E0 (0x11E0 - 0x0)
// ScriptStruct SMExtendedRuntime.SMTextNodeWidgetInfo
struct FSMTextNodeWidgetInfo : public FSMTextDisplayWidgetInfo
{
public:
	struct FInlineEditableTextBlockStyle         EditableTextStyle;                                 // 0x0(0x11D0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x11D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1009[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SMExtendedRuntime.SMTextNodeRichTextInfo
struct FSMTextNodeRichTextInfo
{
public:
	class UDataTable*                            RichTextStyleSet;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class URichTextBlockDecorator>> RichTextDecoratorClasses;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1238 (0x1340 - 0x108)
// ScriptStruct SMExtendedRuntime.SMTextGraphProperty
struct FSMTextGraphProperty : public FSMGraphProperty_Base
{
public:
	class FText                                  Result;                                            // 0x108(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSMTextSerializer                     TextSerializer;                                    // 0x120(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1016[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSMTextNodeWidgetInfo                 WidgetInfo;                                        // 0x140(0x11E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSMTextNodeRichTextInfo               RichTextInfo;                                      // 0x1320(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_101C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


