#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxNexus.NexusAssetStore
// (None)

class UClass* UNexusAssetStore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStore");

	return Clss;
}


// NexusAssetStore GbxNexus.Default__NexusAssetStore
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStore* UNexusAssetStore::GetDefaultObj()
{
	static class UNexusAssetStore* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStore*>(UNexusAssetStore::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusEditorObject
// (None)

class UClass* UNexusEditorObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusEditorObject");

	return Clss;
}


// NexusEditorObject GbxNexus.Default__NexusEditorObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusEditorObject* UNexusEditorObject::GetDefaultObj()
{
	static class UNexusEditorObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusEditorObject*>(UNexusEditorObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetManifest
// (None)

class UClass* UNexusAssetManifest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetManifest");

	return Clss;
}


// NexusAssetManifest GbxNexus.Default__NexusAssetManifest
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetManifest* UNexusAssetManifest::GetDefaultObj()
{
	static class UNexusAssetManifest* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetManifest*>(UNexusAssetManifest::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreCurve
// (None)

class UClass* UNexusAssetStoreCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreCurve");

	return Clss;
}


// NexusAssetStoreCurve GbxNexus.Default__NexusAssetStoreCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreCurve* UNexusAssetStoreCurve::GetDefaultObj()
{
	static class UNexusAssetStoreCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreCurve*>(UNexusAssetStoreCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreMaterial
// (None)

class UClass* UNexusAssetStoreMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreMaterial");

	return Clss;
}


// NexusAssetStoreMaterial GbxNexus.Default__NexusAssetStoreMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreMaterial* UNexusAssetStoreMaterial::GetDefaultObj()
{
	static class UNexusAssetStoreMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreMaterial*>(UNexusAssetStoreMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreParticleSystem
// (None)

class UClass* UNexusAssetStoreParticleSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreParticleSystem");

	return Clss;
}


// NexusAssetStoreParticleSystem GbxNexus.Default__NexusAssetStoreParticleSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreParticleSystem* UNexusAssetStoreParticleSystem::GetDefaultObj()
{
	static class UNexusAssetStoreParticleSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreParticleSystem*>(UNexusAssetStoreParticleSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStorePhysicalMaterial
// (None)

class UClass* UNexusAssetStorePhysicalMaterial::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStorePhysicalMaterial");

	return Clss;
}


// NexusAssetStorePhysicalMaterial GbxNexus.Default__NexusAssetStorePhysicalMaterial
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStorePhysicalMaterial* UNexusAssetStorePhysicalMaterial::GetDefaultObj()
{
	static class UNexusAssetStorePhysicalMaterial* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStorePhysicalMaterial*>(UNexusAssetStorePhysicalMaterial::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreScriptStruct
// (None)

class UClass* UNexusAssetStoreScriptStruct::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreScriptStruct");

	return Clss;
}


// NexusAssetStoreScriptStruct GbxNexus.Default__NexusAssetStoreScriptStruct
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreScriptStruct* UNexusAssetStoreScriptStruct::GetDefaultObj()
{
	static class UNexusAssetStoreScriptStruct* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreScriptStruct*>(UNexusAssetStoreScriptStruct::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreStaticMesh
// (None)

class UClass* UNexusAssetStoreStaticMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreStaticMesh");

	return Clss;
}


// NexusAssetStoreStaticMesh GbxNexus.Default__NexusAssetStoreStaticMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreStaticMesh* UNexusAssetStoreStaticMesh::GetDefaultObj()
{
	static class UNexusAssetStoreStaticMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreStaticMesh*>(UNexusAssetStoreStaticMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreTexture
// (None)

class UClass* UNexusAssetStoreTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreTexture");

	return Clss;
}


// NexusAssetStoreTexture GbxNexus.Default__NexusAssetStoreTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreTexture* UNexusAssetStoreTexture::GetDefaultObj()
{
	static class UNexusAssetStoreTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreTexture*>(UNexusAssetStoreTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreUClass
// (None)

class UClass* UNexusAssetStoreUClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreUClass");

	return Clss;
}


// NexusAssetStoreUClass GbxNexus.Default__NexusAssetStoreUClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreUClass* UNexusAssetStoreUClass::GetDefaultObj()
{
	static class UNexusAssetStoreUClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreUClass*>(UNexusAssetStoreUClass::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusAssetStoreUObject
// (None)

class UClass* UNexusAssetStoreUObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusAssetStoreUObject");

	return Clss;
}


// NexusAssetStoreUObject GbxNexus.Default__NexusAssetStoreUObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusAssetStoreUObject* UNexusAssetStoreUObject::GetDefaultObj()
{
	static class UNexusAssetStoreUObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusAssetStoreUObject*>(UNexusAssetStoreUObject::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStore
// (None)

class UClass* UNexusConfigStore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStore");

	return Clss;
}


// NexusConfigStore GbxNexus.Default__NexusConfigStore
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStore* UNexusConfigStore::GetDefaultObj()
{
	static class UNexusConfigStore* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStore*>(UNexusConfigStore::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreDeep
// (None)

class UClass* UNexusConfigStoreDeep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreDeep");

	return Clss;
}


// NexusConfigStoreDeep GbxNexus.Default__NexusConfigStoreDeep
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreDeep* UNexusConfigStoreDeep::GetDefaultObj()
{
	static class UNexusConfigStoreDeep* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreDeep*>(UNexusConfigStoreDeep::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStorePath
// (None)

class UClass* UNexusConfigStorePath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStorePath");

	return Clss;
}


// NexusConfigStorePath GbxNexus.Default__NexusConfigStorePath
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStorePath* UNexusConfigStorePath::GetDefaultObj()
{
	static class UNexusConfigStorePath* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStorePath*>(UNexusConfigStorePath::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreCredits
// (None)

class UClass* UNexusConfigStoreCredits::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreCredits");

	return Clss;
}


// NexusConfigStoreCredits GbxNexus.Default__NexusConfigStoreCredits
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreCredits* UNexusConfigStoreCredits::GetDefaultObj()
{
	static class UNexusConfigStoreCredits* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreCredits*>(UNexusConfigStoreCredits::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreMix
// (None)

class UClass* UNexusConfigStoreMix::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreMix");

	return Clss;
}


// NexusConfigStoreMix GbxNexus.Default__NexusConfigStoreMix
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreMix* UNexusConfigStoreMix::GetDefaultObj()
{
	static class UNexusConfigStoreMix* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreMix*>(UNexusConfigStoreMix::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreFlat
// (None)

class UClass* UNexusConfigStoreFlat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreFlat");

	return Clss;
}


// NexusConfigStoreFlat GbxNexus.Default__NexusConfigStoreFlat
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreFlat* UNexusConfigStoreFlat::GetDefaultObj()
{
	static class UNexusConfigStoreFlat* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreFlat*>(UNexusConfigStoreFlat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreGeneric
// (None)

class UClass* UNexusConfigStoreGeneric::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreGeneric");

	return Clss;
}


// NexusConfigStoreGeneric GbxNexus.Default__NexusConfigStoreGeneric
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreGeneric* UNexusConfigStoreGeneric::GetDefaultObj()
{
	static class UNexusConfigStoreGeneric* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreGeneric*>(UNexusConfigStoreGeneric::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreGlobals
// (None)

class UClass* UNexusConfigStoreGlobals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreGlobals");

	return Clss;
}


// NexusConfigStoreGlobals GbxNexus.Default__NexusConfigStoreGlobals
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreGlobals* UNexusConfigStoreGlobals::GetDefaultObj()
{
	static class UNexusConfigStoreGlobals* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreGlobals*>(UNexusConfigStoreGlobals::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreTestFlat
// (None)

class UClass* UNexusConfigStoreTestFlat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreTestFlat");

	return Clss;
}


// NexusConfigStoreTestFlat GbxNexus.Default__NexusConfigStoreTestFlat
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreTestFlat* UNexusConfigStoreTestFlat::GetDefaultObj()
{
	static class UNexusConfigStoreTestFlat* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreTestFlat*>(UNexusConfigStoreTestFlat::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreTestMix
// (None)

class UClass* UNexusConfigStoreTestMix::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreTestMix");

	return Clss;
}


// NexusConfigStoreTestMix GbxNexus.Default__NexusConfigStoreTestMix
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreTestMix* UNexusConfigStoreTestMix::GetDefaultObj()
{
	static class UNexusConfigStoreTestMix* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreTestMix*>(UNexusConfigStoreTestMix::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusConfigStoreTestPath
// (None)

class UClass* UNexusConfigStoreTestPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusConfigStoreTestPath");

	return Clss;
}


// NexusConfigStoreTestPath GbxNexus.Default__NexusConfigStoreTestPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusConfigStoreTestPath* UNexusConfigStoreTestPath::GetDefaultObj()
{
	static class UNexusConfigStoreTestPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusConfigStoreTestPath*>(UNexusConfigStoreTestPath::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxNexus.NexusContentLoader
// (None)

class UClass* UNexusContentLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NexusContentLoader");

	return Clss;
}


// NexusContentLoader GbxNexus.Default__NexusContentLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UNexusContentLoader* UNexusContentLoader::GetDefaultObj()
{
	static class UNexusContentLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UNexusContentLoader*>(UNexusContentLoader::StaticClass()->DefaultObject);

	return Default;
}

}


