#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkSourceFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkRole
class ULiveLinkRole : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkBasicRole
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkBasicRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkAnimationRole
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkAnimationRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkTransformRole
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkTransformRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkCameraRole
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkCameraRole* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkController
class ULiveLinkController : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkController* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	enum class ELiveLinkSourceMode               Mode;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;                                    // 0x30(0x58)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ConnectionString;                                  // 0x88(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSourceFactory>    Factory;                                           // 0x98(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveLinkSourceSettings* GetDefaultObj();

};

// 0x50 (0xF0 - 0xA0)
// Class LiveLinkInterface.LiveLinkCurveRemapSettings
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings      CurveConversionSettings;                           // 0xA0(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULiveLinkCurveRemapSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFrameInterpolationProcessor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFramePreProcessor
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFramePreProcessor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameTranslator
class ULiveLinkFrameTranslator : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkFrameTranslator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkLightRole
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkLightRole* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class LiveLinkInterface.LiveLinkSubjectSettings
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>    PreProcessors;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*  InterpolationProcessor;                            // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>      Translators;                                       // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            FrameRate;                                         // 0x58(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRebroadcastSubject;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkSubjectSettings* GetDefaultObj();

};

// 0xB0 (0xD8 - 0x28)
// Class LiveLinkInterface.LiveLinkVirtualSubject
class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                        Pad_60D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>          Subjects;                                          // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>      FrameTranslators;                                  // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_614[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveLinkVirtualSubject* GetDefaultObj();

};

}


