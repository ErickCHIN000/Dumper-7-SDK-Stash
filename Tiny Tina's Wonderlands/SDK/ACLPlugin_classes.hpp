#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// Class ACLPlugin.ACLStatsDumpCommandlet
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UACLStatsDumpCommandlet* GetDefaultObj();

};

// 0x0 (0x48 - 0x48)
// Class ACLPlugin.AnimCompress_ACLBase
class UAnimCompress_ACLBase : public UAnimCompress
{
public:

	static class UClass* StaticClass();
	static class UAnimCompress_ACLBase* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class ACLPlugin.AnimCompress_ACL
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	float                                        DefaultVirtualVertexDistance;                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeVirtualVertexDistance;                         // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafetyFallbackThreshold;                           // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorThreshold;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneToIgnores;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimCompress_ACL* GetDefaultObj();

};

// 0x28 (0x70 - 0x48)
// Class ACLPlugin.AnimCompress_ACLCustom
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                        DefaultVirtualVertexDistance;                      // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SafeVirtualVertexDistance;                         // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLRotationFormat                RotationFormat;                                    // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLVectorFormat                  TranslationFormat;                                 // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EACLVectorFormat                  ScaleFormat;                                       // 0x52(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ErrorThreshold;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantRotationThresholdAngle;                    // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantTranslationThreshold;                      // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstantScaleThreshold;                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClipRangeReduceRotations : 1;                     // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClipRangeReduceTranslations : 1;                  // Mask: 0x2, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClipRangeReduceScales : 1;                        // Mask: 0x4, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSegmenting : 1;                             // Mask: 0x8, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSegmentRangeReduceRotations : 1;                  // Mask: 0x10, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSegmentRangeReduceTranslations : 1;               // Mask: 0x20, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSegmentRangeReduceScales : 1;                     // Mask: 0x40, PropSize: 0x10x64(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6 : 1;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_14E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       IdealNumKeyFramesPerSegment;                       // 0x68(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MaxNumKeyFramesPerSegment;                         // 0x6A(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimCompress_ACLCustom* GetDefaultObj();

};

}


