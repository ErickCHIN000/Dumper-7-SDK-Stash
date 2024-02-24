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

// 0xC (0xC - 0x0)
// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData
{
public:
	TWeakObjectPtr<class UObject>                Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct TemplateSequence.TemplateSequenceInstanceData
struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0x8(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x48 - 0x20)
// ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FFrameNumber                          SectionStartTime;                                  // 0x20(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 OuterBindingId;                                    // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationOperand          InnerOperand;                                      // 0x34(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}


